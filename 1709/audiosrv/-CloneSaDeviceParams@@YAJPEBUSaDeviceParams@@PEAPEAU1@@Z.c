/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x1800080C4
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18000E1A0 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000E514 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800083D0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18005B338 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, struct SaDeviceParams **a2)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rdi
  int v6; // esi
  SaDeviceParams *v7; // rbx
  const unsigned __int16 *v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  LPVOID v13; // rsi
  size_t v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbp
  LPVOID v17; // rsi
  size_t v18; // rbx
  unsigned __int16 **v20; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-60h]
  unsigned int v22; // [rsp+30h] [rbp-58h]
  LPMALLOC ppMalloc; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h]

  *(_QWORD *)&v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0;
  if ( (_QWORD)v4 )
  {
    memset((void *)v4, 0, 0x68uLL);
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = (SaDeviceParams *)v5;
  v24 = v5;
  v8 = *(const unsigned __int16 **)a1;
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  *(_QWORD *)v5 = 0LL;
  v10 = v9 + 1;
  if ( v9 + 1 >= v9 )
  {
    *(_QWORD *)v5 = 0LL;
    v4 = v10 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v10, 2uLL) )
    {
      *(_QWORD *)&v4 = CoTaskMemAlloc(2 * v10);
      *(_QWORD *)v5 = v4;
      if ( !(_QWORD)v4 )
        goto LABEL_26;
      StringCchCopyNExW((unsigned __int16 *)v4, v9 + 1, v8, v9, v20, v21, v22);
    }
    else
    {
      v6 = -2147024362;
    }
    if ( v6 < 0 )
      goto LABEL_21;
    v11 = *((_QWORD *)a1 + 2);
    if ( !v11 )
      goto LABEL_15;
    v12 = *(unsigned __int16 *)(v11 + 16);
    v13 = CoTaskMemAlloc(v12 + 18);
    *(_QWORD *)(v5 + 16) = v13;
    if ( v13 )
    {
      v14 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v14 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v13);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset(*(void **)(v5 + 16), 0, v14);
      v6 = 0;
      memcpy_0(*(void **)(v5 + 16), *((const void **)a1 + 2), v12 + 18);
LABEL_15:
      v15 = *((_QWORD *)a1 + 3);
      if ( !v15 )
      {
LABEL_20:
        *(_OWORD *)(v5 + 64) = *((_OWORD *)a1 + 4);
        *(_OWORD *)(v5 + 48) = *((_OWORD *)a1 + 3);
        *(_DWORD *)(v5 + 8) = *((_DWORD *)a1 + 2);
        *(_QWORD *)(v5 + 32) = *((_QWORD *)a1 + 4);
        *(_QWORD *)(v5 + 40) = *((_QWORD *)a1 + 5);
        *(_OWORD *)(v5 + 80) = *((_OWORD *)a1 + 5);
        *(_BYTE *)(v5 + 96) = *((_BYTE *)a1 + 96);
        v7 = 0LL;
        *a2 = (struct SaDeviceParams *)v5;
        goto LABEL_21;
      }
      v16 = *(unsigned __int16 *)(v15 + 16);
      v17 = CoTaskMemAlloc(v16 + 18);
      *(_QWORD *)(v5 + 24) = v17;
      if ( v17 )
      {
        v18 = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v18 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v17);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        }
        memset(*(void **)(v5 + 24), 0, v18);
        v6 = 0;
        memcpy_0(*(void **)(v5 + 24), *((const void **)a1 + 3), v16 + 18);
        goto LABEL_20;
      }
    }
LABEL_26:
    v6 = -2147024882;
    goto LABEL_21;
  }
  v6 = -2147024362;
LABEL_21:
  if ( v7 )
    SaDeviceParams::`scalar deleting destructor'(v7, DWORD2(v4));
  return (unsigned int)v6;
}
