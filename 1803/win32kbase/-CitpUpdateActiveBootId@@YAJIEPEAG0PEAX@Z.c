/*
 * XREFs of ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0164664
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603F4 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C01602E4 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0161AD0 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0161B78 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0162128 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 */

__int64 __fastcall CitpUpdateActiveBootId(int a1, char a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // esi
  int v9; // ebx
  char IsStateSeparationEnabled; // al
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  void *v14; // rdi
  NTSTATUS v15; // eax
  const char *v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // esi
  ULONG v20; // r15d
  USHORT v21; // ax
  NTSTATUS v22; // eax
  const char *v23; // rdx
  NTSTATUS v24; // eax
  const char *v25; // rdx
  unsigned __int16 v26; // ax
  unsigned int Data; // [rsp+30h] [rbp-A1h] BYREF
  struct _UNICODE_STRING Handle; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int8 v31[8]; // [rsp+50h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-71h] BYREF
  _DWORD KeyInformation[12]; // [rsp+70h] [rbp-61h] BYREF
  WCHAR SourceString[12]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+B8h] [rbp-19h] BYREF
  USHORT v37; // [rsp+C8h] [rbp-9h]
  char v38; // [rsp+CCh] [rbp-5h] BYREF

  v4 = 0;
  *(_DWORD *)v31 = a1;
  *(_QWORD *)&Handle.Length = 0LL;
  Data = 0;
  v30 = 0;
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
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v11 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
    if ( !IsStateSeparationEnabled )
      v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
    v9 = CitpEnsureKey((void **)&Handle, v11, 1);
    if ( v9 >= 0 )
    {
      CitpBytesToString(v31, v12, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v13 = a2 == 0;
      v14 = *(void **)&Handle.Length;
      if ( v13 )
      {
        v24 = ZwDeleteValueKey(*(HANDLE *)&Handle.Length, &DestinationString);
        if ( v24 == -1073741772 )
          v24 = 0;
        if ( v24 < 0 )
          CitpLogFailureWorker((unsigned int)v24, v25, 0x5C4u);
      }
      else
      {
        CitpParameterGetInt32(*(HANDLE *)&Handle.Length, SourceString, &v30);
        memset(KeyInformation, 0, sizeof(KeyInformation));
        v15 = ZwQueryKey(v14, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
        v9 = v15;
        if ( v15 < 0 && v15 != -2147483643 && v15 != -1073741789 )
        {
          v17 = 1408;
LABEL_13:
          CitpLogFailureWorker((unsigned int)v15, v16, v17);
          goto LABEL_47;
        }
        v18 = KeyInformation[8];
        if ( KeyInformation[8] > 8u )
        {
          v19 = KeyInformation[8] - 8;
          v20 = 0;
          while ( v4 < v18 )
          {
            v15 = ZwEnumerateValueKey(v14, v20, KeyValueFullInformation, KeyValueInformation, 0x2Au, &ResultLength);
            v9 = v15;
            if ( v15 < 0 && v15 != -2147483643 && v15 != -1073741789 )
            {
              if ( v15 == -2147483622 )
                break;
              v17 = 1429;
              goto LABEL_13;
            }
            Handle.Buffer = (PWSTR)&v38;
            v21 = v37;
            if ( v37 <= 0x12u )
            {
              Handle.Length = v37;
            }
            else
            {
              v21 = 18;
              Handle.Length = 18;
            }
            Handle.MaximumLength = v21;
            v22 = ZwDeleteValueKey(v14, &Handle);
            if ( v22 < 0 )
            {
              ++v20;
              CitpLogFailureWorker((unsigned int)v22, v23, 0x5A9u);
            }
            else
            {
              --v19;
            }
            ++v4;
            if ( !v19 )
              break;
            v18 = KeyInformation[8];
          }
        }
        v15 = ZwSetValueKey(v14, &DestinationString, 0, 4u, &Data, 4u);
        v9 = v15;
        if ( v15 < 0 )
        {
          v17 = 1460;
          goto LABEL_13;
        }
        v8 = v30;
      }
      if ( a3 )
      {
        if ( v8 > 0xFFFF )
          LOWORD(v8) = -1;
        *a3 = v8;
      }
      if ( a4 )
      {
        v26 = Data;
        if ( Data > 0xFFFF )
          v26 = -1;
        *a4 = v26;
      }
      v9 = 0;
      goto LABEL_47;
    }
  }
  v14 = *(void **)&Handle.Length;
LABEL_47:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)v9;
}
