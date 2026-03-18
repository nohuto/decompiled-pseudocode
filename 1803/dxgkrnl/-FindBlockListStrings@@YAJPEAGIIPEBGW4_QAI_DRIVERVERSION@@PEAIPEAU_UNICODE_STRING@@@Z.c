/*
 * XREFs of ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C01E9778
 * Callers:
 *     ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9254 (-CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9474 (-CheckRuntimeBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000904C (_TlgCreateWsz.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C001C5D6 (wcscmp_0.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C01E9C04 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01F0410 (DxgkRetrieveStringFromRegistry.c)
 */

__int64 __fastcall FindBlockListStrings(
        PCWSTR SourceString,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned int *a6,
        struct _UNICODE_STRING *a7)
{
  unsigned int *v7; // rdi
  struct _UNICODE_STRING *v8; // r14
  const unsigned __int16 *v9; // r15
  ULONG v10; // ebx
  NTSTATUS v12; // r12d
  ULONG v13; // esi
  unsigned __int16 *v14; // r13
  unsigned __int64 v15; // rax
  int i; // r8d
  int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // edi
  __m128i *v20; // r15
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  const wchar_t *v25; // rcx
  __int64 v26; // rbx
  char v27; // si
  unsigned int v28; // edi
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  const wchar_t *v33; // rcx
  __int64 v34; // rbx
  char v35; // r10
  BOOLEAN v36; // al
  const GUID *v37; // r9
  int v38; // r11d
  char v39; // r10
  int v40; // eax
  unsigned __int8 v41[4]; // [rsp+30h] [rbp-D0h] BYREF
  enum _QAI_DRIVERVERSION v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR pwsz; // [rsp+48h] [rbp-B8h]
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int *v48; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING *v49; // [rsp+60h] [rbp-A0h]
  __m128i v50; // [rsp+70h] [rbp-90h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD KeyInformation[12]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  unsigned int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  enum _QAI_DRIVERVERSION *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+160h] [rbp+60h] BYREF
  int *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  unsigned int v66; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v67; // [rsp+1F0h] [rbp+F0h] BYREF

  v67 = a3;
  v66 = a2;
  v7 = a6;
  v8 = a7;
  v48 = a6;
  v9 = a4;
  v49 = a7;
  pwsz = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v10 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v12 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v12 >= 0 )
  {
    if ( KeyInformation[8] )
    {
      v13 = KeyInformation[9] + 18;
      v43 = KeyInformation[9] + 18;
      v14 = (unsigned __int16 *)operator new[]((unsigned int)(KeyInformation[9] + 18), 0x4B677844u, PagedPool);
      if ( v14 )
      {
        v42 = 0;
        if ( KeyInformation[8] )
        {
          do
          {
            v12 = ZwEnumerateValueKey(KeyHandle, v10, KeyValueBasicInformation, v14, v13, &ResultLength);
            if ( v12 >= 0 && *((_DWORD *)v14 + 1) == 7 )
            {
              v15 = (unsigned __int64)*((unsigned int *)v14 + 2) >> 1;
              v41[0] = 0;
              v14[v15 + 6] = 0;
              v12 = ParseAndCompareBlockListCondition(v14 + 6, v66, v67, v9, a5, v41);
              if ( v12 >= 0 )
              {
                if ( v41[0] )
                {
                  RtlInitUnicodeString(&ValueName, v14 + 6);
                  if ( *v7 < 0x14 )
                  {
                    v12 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName);
                    if ( v12 >= 0 )
                    {
                      for ( i = 0; i < 2; ++i )
                      {
                        v17 = (v8[*v7].Length >> 1) - i;
                        v8[*v7].Buffer[v17 - 1] = 0;
                      }
                      v18 = *v7;
                      v19 = 0;
                      v20 = (__m128i *)&v8[v18];
                      v21 = _mm_cvtsi128_si32(*v20);
                      v50 = *v20;
                      v22 = v21;
                      if ( v21 )
                      {
                        v23 = v50.m128i_i64[1];
                        v24 = 0LL;
                        while ( 1 )
                        {
                          v25 = (const wchar_t *)(v24 + v23);
                          v26 = -1LL;
                          do
                            ++v26;
                          while ( v25[v26] );
                          if ( !(_DWORD)v26 )
                          {
LABEL_22:
                            v10 = v42;
                            goto LABEL_23;
                          }
                          if ( !wcscmp_0(v25, L"GPU_PV_ALL") )
                            break;
                          v19 += v26 + 1;
                          v24 = 2LL * v19;
                          if ( v24 >= v22 )
                            goto LABEL_22;
                        }
                        v10 = v42;
                        v27 = 1;
                      }
                      else
                      {
LABEL_23:
                        v27 = 0;
                      }
                      v28 = 0;
                      v29 = _mm_cvtsi128_si32(*v20);
                      v50 = *v20;
                      v30 = v29;
                      if ( v29 )
                      {
                        v31 = v50.m128i_i64[1];
                        v32 = 0LL;
                        while ( 1 )
                        {
                          v33 = (const wchar_t *)(v32 + v31);
                          v34 = -1LL;
                          do
                            ++v34;
                          while ( v33[v34] );
                          if ( !(_DWORD)v34 )
                          {
LABEL_31:
                            v10 = v42;
                            goto LABEL_32;
                          }
                          if ( !wcscmp_0(v33, L"GPU_PV_HIGH_SECURITY") )
                            break;
                          v28 += v34 + 1;
                          v32 = 2LL * v28;
                          if ( v32 >= v30 )
                            goto LABEL_31;
                        }
                        v10 = v42;
                        v35 = 1;
                      }
                      else
                      {
LABEL_32:
                        v35 = 0;
                      }
                      if ( (v27 || v35) && dword_1C0079090 > 5u )
                      {
                        v36 = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x400000000200uLL);
                        v9 = pwsz;
                        if ( v36 )
                        {
                          v57 = 4LL;
                          v56 = &v66;
                          v59 = 4LL;
                          v58 = &v67;
                          TlgCreateWsz(&pDesc, pwsz);
                          v42 = a5;
                          v62 = 4LL;
                          v61 = &v42;
                          TlgCreateWsz(&v63, v14 + 6);
                          if ( !v39 || (v40 = 1, v27) )
                            v40 = v38;
                          v47 = v40;
                          v64 = &v47;
                          v65 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C0058DB8, 0LL, v37, 8u, &pData);
                        }
                      }
                      else
                      {
                        v9 = pwsz;
                      }
                      v7 = v48;
                      v8 = v49;
                      ++*v48;
                    }
                  }
                }
              }
              v13 = v43;
            }
            v42 = ++v10;
          }
          while ( v10 < KeyInformation[8] );
        }
        operator delete[](v14);
      }
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v12;
}
