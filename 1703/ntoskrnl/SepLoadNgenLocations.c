/*
 * XREFs of SepLoadNgenLocations @ 0x1405CE94C
 * Callers:
 *     SepSetSystemPaths @ 0x1405CE854 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017E1A0 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x14017E200 (ZwQueryKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLoadNgenLocations(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  unsigned int v4; // r14d
  ULONG v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  _DWORD *PoolWithTag; // rsi
  _DWORD *v12; // rax
  signed __int64 v13; // rdi
  ULONG v14; // r12d
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  void *v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v28; // [rsp+50h] [rbp-51h]
  __int64 v29; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-11h] BYREF
  int v32; // [rsp+94h] [rbp-Dh]
  unsigned int v33; // [rsp+98h] [rbp-9h]
  _BYTE KeyInformation[32]; // [rsp+A0h] [rbp-1h] BYREF
  ULONG v35; // [rsp+C0h] [rbp+1Fh]
  int v36; // [rsp+C4h] [rbp+23h]

  v1 = 0;
  v29 = a1;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
LABEL_43:
      v3 = 0;
  }
  else
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 && v35 && (unsigned int)(v36 - 1) <= 0xFFFE )
    {
      v4 = -1;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v3 = ZwEnumerateValueKey(KeyHandle, v5, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
        if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2147483643 )
          break;
        if ( v32 == 4 && v33 >= 2 )
        {
          v8 = v33 + 16;
          v9 = v33 + 16 + v6;
          v6 = -1;
          if ( v9 >= v33 + 16 )
            v6 = v9;
          v3 = v9 < v8 ? 0xC0000095 : 0;
          if ( v9 < v8 )
            break;
          ++v7;
        }
        if ( ++v5 >= v35 )
        {
          if ( !v7 )
            goto LABEL_43;
          v10 = v6 + 8;
          if ( v6 + 8 >= v6 )
            v4 = v6 + 8;
          v3 = v10 < v6 ? 0xC0000095 : 0;
          if ( v10 >= v6 )
          {
            Length = v36 + 16;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v36 + 16), 0x63734943u);
            if ( PoolWithTag )
            {
              v12 = ExAllocatePoolWithTag(PagedPool, v4, 0x63734943u);
              v13 = (signed __int64)v12;
              if ( v12 )
              {
                v12[1] = 0xFFFF;
                v14 = 0;
                v28 = &v12[4 * v7 + 2];
                v15 = v4 - (16 * v7 + 8);
                if ( v35 )
                {
                  while ( 1 )
                  {
                    v3 = ZwEnumerateValueKey(
                           KeyHandle,
                           v14,
                           KeyValueBasicInformation,
                           PoolWithTag,
                           Length,
                           &ResultLength);
                    if ( v3 < 0 )
                      break;
                    if ( PoolWithTag[1] == 4 && PoolWithTag[2] >= 2u )
                    {
                      do
                      {
                        v16 = PoolWithTag[2];
                        if ( *((_WORD *)PoolWithTag + ((unsigned __int64)v16 >> 1) + 5) )
                          break;
                        PoolWithTag[2] = v16 - 2;
                      }
                      while ( v16 - 2 >= 2 );
                      v17 = PoolWithTag[2];
                      if ( v17 )
                      {
                        if ( v17 > v15 || v1 >= v7 )
                        {
                          v3 = -2147483643;
                          break;
                        }
                        v18 = v28;
                        if ( *(unsigned __int16 *)(v13 + 4) < v17 )
                          LOWORD(v17) = *(_WORD *)(v13 + 4);
                        v19 = *(unsigned __int16 *)(v13 + 6);
                        *(_WORD *)(v13 + 4) = v17;
                        v20 = PoolWithTag[2];
                        if ( v19 > v20 )
                          LOWORD(v20) = v19;
                        *(_WORD *)(v13 + 6) = v20;
                        v21 = 2LL * v1;
                        *(_QWORD *)(v13 + 8 * v21 + 16) = v18;
                        *(_WORD *)(v13 + 8 * v21 + 8) = *((_WORD *)PoolWithTag + 4);
                        *(_WORD *)(v13 + 8 * v21 + 10) = *((_WORD *)PoolWithTag + 4);
                        memmove(v18, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
                        v22 = (unsigned int)PoolWithTag[2];
                        v28 = (char *)v28 + v22;
                        v15 -= v22;
                        ++v1;
                      }
                    }
                    if ( ++v14 >= v35 )
                      goto LABEL_34;
                  }
                }
                else
                {
LABEL_34:
                  *(_WORD *)(v13 + 4) += 8;
                  *(_WORD *)(v13 + 6) += 8;
                  v23 = v29;
                  *(_DWORD *)v13 = v1;
                  v13 &= -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 40), v13, 0LL) != 0);
                }
                if ( v13 )
                  ExFreePoolWithTag((PVOID)v13, 0x63734943u);
              }
              else
              {
                v3 = -1073741801;
              }
              ExFreePoolWithTag(PoolWithTag, 0x63734943u);
            }
            else
            {
              v3 = -1073741801;
            }
          }
          break;
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
