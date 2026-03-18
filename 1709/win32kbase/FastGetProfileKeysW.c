/*
 * XREFs of FastGetProfileKeysW @ 0x1C00DEB30
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserReAllocPoolWithQuota @ 0x1C0091230 (UserReAllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, unsigned int a2, void *a3, _QWORD *a4)
{
  _WORD *v5; // r15
  __int64 v6; // rbp
  _WORD *v7; // rbx
  ULONG Length; // r12d
  void *v9; // r13
  _DWORD *v10; // r15
  ULONG v11; // esi
  unsigned int v12; // edi
  NTSTATUS v13; // eax
  ULONG v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rsi
  _WORD *v19; // rax
  _WORD *v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-278h]
  ULONG ResultLength; // [rsp+34h] [rbp-274h] BYREF
  void *Src; // [rsp+38h] [rbp-270h]
  _QWORD *v25; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v25 = a4;
  Src = a3;
  v5 = a3;
  v22 = 0;
  v6 = 0LL;
  v7 = 0LL;
  Length = 512;
  v9 = OpenCacheKeyEx(a1, a2, 0x20019u, 0LL);
  if ( !v9 )
  {
    v12 = 0;
    v11 = 0;
    goto LABEL_14;
  }
  *a4 = 0LL;
  v10 = KeyValueInformation;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = ZwEnumerateValueKey(v9, v11, KeyValueBasicInformation, v10, Length, &ResultLength);
    if ( v13 != -2147483643 )
      break;
    v14 = ResultLength;
    if ( ResultLength <= Length )
      goto LABEL_13;
    if ( v6 )
    {
      Win32FreePool(v6);
      v14 = ResultLength;
      v10 = KeyValueInformation;
      Length = 512;
    }
    v15 = Win32AllocPoolWithQuota(v14, 0x72707355u);
    v6 = v15;
    if ( v15 )
    {
      Length = ResultLength;
      v10 = (_DWORD *)v15;
    }
    else
    {
LABEL_29:
      ++v11;
    }
  }
  if ( v13 < 0 )
    goto LABEL_13;
  v16 = (v10[2] + v12 + 4099) & 0xFFFFF000;
  if ( v22 >= v16 )
  {
LABEL_28:
    v22 = v16;
    memmove(&v7[(unsigned __int64)v12 >> 1], v10 + 3, (unsigned int)v10[2]);
    v7[(unsigned __int64)(v12 + v10[2]) >> 1] = 0;
    v12 += v10[2] + 2;
    goto LABEL_29;
  }
  if ( !v7 )
  {
    v7 = (_WORD *)Win32AllocPoolWithQuota(v16, 0x72707355u);
    if ( !v7 )
      goto LABEL_13;
    goto LABEL_28;
  }
  v21 = UserReAllocPoolWithQuota(v7, v12, v16, 0x72707355u);
  if ( v21 )
  {
    v7 = v21;
    goto LABEL_28;
  }
LABEL_13:
  v5 = Src;
LABEL_14:
  if ( !v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v5[v17] );
    v18 = (unsigned int)(2 * v17 + 4);
    v19 = (_WORD *)Win32AllocPoolWithQuota(v18, 0x72707355u);
    v7 = v19;
    if ( v19 )
    {
      memmove(v19, v5, v18 - 2);
      v12 = v18 - 2;
    }
  }
  if ( v9 )
    ZwClose(v9);
  if ( v6 )
    Win32FreePool(v6);
  if ( v7 )
    v7[(unsigned __int64)v12 >> 1] = 0;
  *v25 = v7;
  return v12 >> 1;
}
