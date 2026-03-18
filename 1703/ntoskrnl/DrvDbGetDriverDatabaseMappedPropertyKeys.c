/*
 * XREFs of DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140742D74
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404E8770 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbFindDatabaseNode @ 0x14044C7CC (DrvDbFindDatabaseNode.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x140742C18 (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  const WCHAR *v9; // r14
  HANDLE v10; // r13
  __int64 v11; // rdi
  __int64 **v12; // rbx
  unsigned int v13; // esi
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  signed int v17; // ebx
  HANDLE v18; // rax
  _UNKNOWN **v19; // r14
  unsigned int v20; // r13d
  const WCHAR *v21; // rdx
  signed int Value; // eax
  _OWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r14d
  _UNKNOWN **v27; // rsi
  const WCHAR *v28; // rdx
  signed int v29; // eax
  _OWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // [rsp+20h] [rbp-78h]
  unsigned int *v37; // [rsp+28h] [rbp-70h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  const UNICODE_STRING *v39; // [rsp+40h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-48h] BYREF
  HANDLE v42; // [rsp+58h] [rbp-40h]

  v6 = (unsigned int *)a6;
  v7 = 0;
  v8 = a5;
  v9 = a2;
  v37 = (unsigned int *)a6;
  v10 = a3;
  v39 = 0LL;
  Handle = 0LL;
  v11 = a4;
  KeyHandle = 0LL;
  v12 = (__int64 **)a1;
  *(_DWORD *)a6 = 0;
  v13 = 0;
  result = DrvDbGetCompositeMappedPropertyKeys(a1, (_OWORD **)off_14033C598, 5u, a4, a5, v37);
  if ( (int)result < 0 )
    return result;
  v16 = *v6;
  if ( (_DWORD)v16 )
  {
    if ( v15 )
      v11 = v15 + 20 * v16;
    v8 = a5 - v16;
  }
  result = DrvDbFindDatabaseNode((__int64)v12, v9, &v39);
  if ( (int)result < 0 )
    return result;
  if ( ((__int64)v39[3].Buffer & 0x10) == 0 )
    goto LABEL_30;
  LOBYTE(v38) = 0;
  LODWORD(v36) = 1;
  v17 = DrvDbOpenObjectRegKey((__int64)v12, v12[4], 1u, v9, v36, v38, &KeyHandle, 0LL);
  if ( v17 < 0 )
    goto LABEL_47;
  v18 = KeyHandle;
  v19 = &off_14028EBD0;
  v42 = KeyHandle;
  v20 = 0;
  while ( 1 )
  {
    v21 = (const WCHAR *)v19[2];
    LODWORD(a6) = 0;
    Value = RegRtlQueryValue(v18, v21, 0LL, 0LL, (unsigned int *)&a6);
    v17 = Value;
    if ( Value == -1073741772 )
      goto LABEL_18;
    if ( Value && Value != -1073741789 )
      break;
    if ( v11 && v20 < v8 )
    {
      v23 = *v19;
      v24 = v20++;
      v25 = 5 * v24;
      *(_OWORD *)(v11 + 4 * v25) = *(_OWORD *)*v19;
      *(_DWORD *)(v11 + 4 * v25 + 16) = *((_DWORD *)v23 + 4);
    }
    if ( v13 + 1 < v13 )
    {
      v7 = 0;
      v17 = -1073741675;
      v13 = 0;
      goto LABEL_22;
    }
    ++v13;
LABEL_18:
    v17 = 0;
    ++v7;
    v19 += 5;
    if ( v7 >= 2 )
      break;
    v18 = v42;
  }
  v7 = 0;
LABEL_22:
  if ( v17 < 0 )
    goto LABEL_47;
  if ( v13 )
  {
    if ( v11 )
      v11 += 20LL * v13;
    v8 -= v13;
  }
  if ( ((__int64)v39[3].Buffer & 4) != 0 )
  {
    v17 = 0;
    goto LABEL_47;
  }
  v12 = (__int64 **)a1;
  v9 = a2;
  v10 = a3;
LABEL_30:
  if ( !v10 )
  {
    v17 = DrvDbOpenDriverDatabaseRegKey(v12, v9, 1u, 0, (__int64)&Handle, 0LL);
    if ( v17 < 0 )
      goto LABEL_47;
    v10 = Handle;
  }
  v26 = 0;
  v27 = &off_140288000;
  while ( 2 )
  {
    v28 = (const WCHAR *)v27[2];
    LODWORD(a6) = 0;
    v29 = RegRtlQueryValue(v10, v28, 0LL, 0LL, (unsigned int *)&a6);
    v17 = v29;
    if ( v29 == -1073741772 )
    {
      v17 = 0;
LABEL_44:
      ++v7;
      v27 += 5;
      if ( v7 >= 7 )
        goto LABEL_47;
      continue;
    }
    break;
  }
  if ( v29 && v29 != -1073741789 )
    goto LABEL_47;
  if ( v11 && v26 < v8 )
  {
    v30 = *v27;
    v31 = v26++;
    v32 = 5 * v31;
    *(_OWORD *)(v11 + 4 * v32) = *(_OWORD *)*v27;
    *(_DWORD *)(v11 + 4 * v32 + 16) = *((_DWORD *)v30 + 4);
  }
  v33 = *v6;
  v34 = -1;
  v35 = *v6 + 1;
  if ( v35 >= *v6 )
    v34 = *v6 + 1;
  v17 = v35 < v33 ? 0xC0000095 : 0;
  *v6 = v34;
  if ( v35 >= v33 )
    goto LABEL_44;
  *v6 = 0;
LABEL_47:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v17;
}
