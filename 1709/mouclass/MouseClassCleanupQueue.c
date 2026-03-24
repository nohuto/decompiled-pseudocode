/*
 * XREFs of MouseClassCleanupQueue @ 0x1C000259C
 * Callers:
 *     MouseClassRemoveDevice @ 0x1C0003660 (MouseClassRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MouseClassCleanupQueue(__int64 a1, __int64 a2, __int64 *a3)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // r8
  __int64 ***v7; // rcx
  bool i; // zf
  __int64 **v9; // rdx
  __int64 ****v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // rbx
  __int64 **result; // rax
  __int64 *v14; // rax
  __int64 *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v16; // [rsp+28h] [rbp-8h]

  v16 = &v15;
  v4 = (KSPIN_LOCK *)(a2 + 144);
  v15 = (__int64 *)&v15;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 144));
  v7 = *(__int64 ****)(a2 + 152);
  for ( i = v7 == (__int64 ***)(a2 + 152); !i; i = v9 == (__int64 **)(a2 + 152) )
  {
    v9 = *v7;
    if ( !a3 || v7[2][6] == a3 )
    {
      if ( v9[1] != (__int64 *)v7 || (v10 = (__int64 ****)v7[1], *v10 != v7) )
        __fastfail(3u);
      *v10 = (__int64 ***)v9;
      v9[1] = (__int64 *)v10;
      if ( _InterlockedExchange64((volatile __int64 *)v7 - 8, 0LL) )
      {
        *(v7 - 14) = 0LL;
        *((_DWORD *)v7 - 30) = -1073741536;
        v11 = v16;
        if ( *v16 != (__int64 *)&v15 )
          __fastfail(3u);
        v7[1] = v16;
        *v7 = &v15;
        *v11 = v7;
        v16 = (__int64 **)v7;
      }
      else
      {
        v7[1] = (__int64 **)v7;
        *v7 = (__int64 **)v7;
      }
    }
    v7 = (__int64 ***)v9;
  }
  KeReleaseSpinLock(v4, v6);
  while ( 1 )
  {
    v12 = v15;
    result = &v15;
    if ( v15 == (__int64 *)&v15 )
      break;
    if ( (__int64 **)v15[1] != &v15 || (v14 = (__int64 *)*v15, *(__int64 **)(*v15 + 8) != v15) )
      __fastfail(3u);
    v15 = (__int64 *)*v15;
    v14[1] = (__int64)&v15;
    IofCompleteRequest((PIRP)(v12 - 21), 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 32), v12 - 21, 0x20u);
  }
  return result;
}
