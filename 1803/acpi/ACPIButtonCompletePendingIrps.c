/*
 * XREFs of ACPIButtonCompletePendingIrps @ 0x1C0016104
 * Callers:
 *     ACPIButtonEvent @ 0x1C0016394 (ACPIButtonEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIButtonCompletePendingIrps(__int64 a1, int a2)
{
  char v3; // di
  KIRQL v5; // al
  __int64 *v6; // r8
  KIRQL v7; // r9
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 **v12; // rax
  __int64 **v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  IRP *v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // r8
  _QWORD *v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-10h]

  v21 = (__int64 *)&v20;
  v3 = 0;
  v20 = &v20;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v6 = (__int64 *)AcpiButtonList;
  v7 = v5;
  while ( v6 != &AcpiButtonList )
  {
    v8 = v6 - 21;
    v9 = v6;
    v10 = v6[2];
    v6 = (__int64 *)*v6;
    if ( *(_QWORD *)(v10 + 40) == a1 && _InterlockedExchange64(v8 + 13, 0LL) )
    {
      *(_DWORD *)v8[3] = a2;
      *((_DWORD *)v8 + 12) = 0;
      v8[7] = 4LL;
      v11 = *v9;
      if ( *(__int64 **)(*v9 + 8) != v9 || (v12 = (__int64 **)v9[1], *v12 != v9) )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = (__int64 **)v21;
      if ( (_QWORD **)*v21 != &v20 )
        __fastfail(3u);
      v9[1] = (__int64)v21;
      *v9 = (__int64)&v20;
      *v13 = v9;
      v21 = v9;
    }
  }
  KeReleaseSpinLock(&AcpiButtonLock, v7);
  v14 = v20;
  while ( v14 != &v20 )
  {
    v15 = (_QWORD *)*v14;
    v16 = (IRP *)(v14 - 21);
    v17 = v14;
    v14 = v15;
    if ( (_QWORD *)v15[1] != v17 || (v18 = (_QWORD *)v17[1], (_QWORD *)*v18 != v17) )
      __fastfail(3u);
    *v18 = v15;
    v15[1] = v18;
    IofCompleteRequest(v16, 0);
    v3 = 1;
  }
  return v3;
}
