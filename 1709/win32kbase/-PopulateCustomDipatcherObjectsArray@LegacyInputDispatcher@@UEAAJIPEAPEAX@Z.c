/*
 * XREFs of ?PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01190E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall LegacyInputDispatcher::PopulateCustomDipatcherObjectsArray(
        LegacyInputDispatcher *this,
        unsigned int a2,
        void **a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax

  v4 = a2;
  if ( !*((_QWORD *)this + 2) )
  {
    v6 = Win32AllocPoolNonPaged(8LL * *((unsigned int *)this + 11), 0x79737355u);
    *((_QWORD *)this + 2) = v6;
    if ( !v6 )
      return 3221225506LL;
  }
  if ( (_DWORD)v4 )
  {
    v8 = 8LL;
    v9 = v4;
    do
    {
      v10 = (__int64)*a3++;
      *(_QWORD *)(v8 + *((_QWORD *)this + 2)) = v10;
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 12) = v4 + 1;
  return 0LL;
}
