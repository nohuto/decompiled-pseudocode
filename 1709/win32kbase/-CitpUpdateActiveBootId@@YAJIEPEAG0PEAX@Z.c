/*
 * XREFs of ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0082944
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EF8 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082274 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0082800 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0082B24 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0082B88 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0082BF8 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpUpdateActiveBootId(int a1, char a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // esi
  int v9; // ebx
  unsigned int v10; // edx
  bool v11; // zf
  void *v12; // rdi
  NTSTATUS v13; // eax
  const char *v14; // rdx
  unsigned int v15; // eax
  unsigned __int16 v16; // ax
  NTSTATUS v18; // eax
  const char *v19; // rdx
  unsigned int v20; // r8d
  int v21; // esi
  ULONG v22; // r15d
  USHORT v23; // ax
  NTSTATUS v24; // eax
  const char *v25; // rdx
  unsigned int Data; // [rsp+30h] [rbp-A1h] BYREF
  struct _UNICODE_STRING Handle; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-89h] BYREF
  int v29; // [rsp+50h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-71h] BYREF
  _DWORD KeyInformation[12]; // [rsp+70h] [rbp-61h] BYREF
  WCHAR SourceString[12]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+B8h] [rbp-19h] BYREF
  USHORT v35; // [rsp+C8h] [rbp-9h]
  char v36; // [rsp+CCh] [rbp-5h] BYREF

  v4 = 0;
  v29 = a1;
  *(_QWORD *)&Handle.Length = 0LL;
  Data = 0;
  v28 = 0;
  v8 = 0;
  if ( a2 )
  {
    Data = MEMORY[0xFFFFF780000002C4];
    if ( !MEMORY[0xFFFFF780000002C4] )
      return (unsigned int)-1073741637;
  }
  v9 = CitpEnsureDataKey((void **)&Handle);
  if ( v9 >= 0 )
  {
    ZwClose(*(HANDLE *)&Handle.Length);
    *(_QWORD *)&Handle.Length = 0LL;
    v9 = CitpEnsureKey(
           (void **)&Handle,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active",
           1);
    if ( v9 >= 0 )
    {
      CitpBytesToString(&v29, v10, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v11 = a2 == 0;
      v12 = *(void **)&Handle.Length;
      if ( v11 )
      {
        v18 = ZwDeleteValueKey(*(HANDLE *)&Handle.Length, &DestinationString);
        if ( v18 == -1073741772 )
          v18 = 0;
        if ( v18 < 0 )
          CitpLogFailureWorker(v18, v19, 0x5BBu);
      }
      else
      {
        CitpParameterGetInt32(*(HANDLE *)&Handle.Length, SourceString, &v28);
        memset(KeyInformation, 0, sizeof(KeyInformation));
        v13 = ZwQueryKey(v12, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
        v9 = v13;
        if ( v13 < 0 && v13 != -2147483643 && v13 != -1073741789 )
        {
          v20 = 1399;
LABEL_31:
          CitpLogFailureWorker(v13, v14, v20);
          goto LABEL_19;
        }
        v15 = KeyInformation[8];
        if ( KeyInformation[8] > 8u )
        {
          v21 = KeyInformation[8] - 8;
          v22 = 0;
          while ( v4 < v15 )
          {
            v13 = ZwEnumerateValueKey(v12, v22, KeyValueFullInformation, KeyValueInformation, 0x2Au, &ResultLength);
            v9 = v13;
            if ( v13 < 0 && v13 != -2147483643 && v13 != -1073741789 )
            {
              if ( v13 == -2147483622 )
                break;
              v20 = 1420;
              goto LABEL_31;
            }
            Handle.Buffer = (PWSTR)&v36;
            v23 = v35;
            if ( v35 <= 0x12u )
            {
              Handle.Length = v35;
            }
            else
            {
              v23 = 18;
              Handle.Length = 18;
            }
            Handle.MaximumLength = v23;
            v24 = ZwDeleteValueKey(v12, &Handle);
            if ( v24 < 0 )
            {
              ++v22;
              CitpLogFailureWorker(v24, v25, 0x5A0u);
            }
            else
            {
              --v21;
            }
            ++v4;
            if ( !v21 )
              break;
            v15 = KeyInformation[8];
          }
        }
        v13 = ZwSetValueKey(v12, &DestinationString, 0, 4u, &Data, 4u);
        v9 = v13;
        if ( v13 < 0 )
        {
          v20 = 1451;
          goto LABEL_31;
        }
        v8 = v28;
      }
      if ( a3 )
      {
        if ( v8 > 0xFFFF )
          LOWORD(v8) = -1;
        *a3 = v8;
      }
      if ( a4 )
      {
        v16 = Data;
        if ( Data > 0xFFFF )
          v16 = -1;
        *a4 = v16;
      }
      v9 = 0;
      goto LABEL_19;
    }
  }
  v12 = *(void **)&Handle.Length;
LABEL_19:
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)v9;
}
