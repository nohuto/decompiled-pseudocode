/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C006E470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyInputDispatcher::RegisterInputDispatcherObjects(
        LegacyInputDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  int v6; // ecx
  int v8; // eax
  unsigned int v9; // r9d
  int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rdx

  v6 = *((_DWORD *)this + 10);
  if ( v6 + a3 > *((_DWORD *)this + 9) )
    return 3221225485LL;
  v8 = *((_DWORD *)this + 8);
  v9 = 0;
  v10 = 0;
  if ( v8 != 64 )
    v10 = v6 - v8;
  if ( a3 )
  {
    do
    {
      v11 = *(_QWORD *)a4;
      a4 = (struct InputDispatcherObject *)((char *)a4 + 24);
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (v9 + *((_DWORD *)this + 10))) = v11;
      v12 = 2LL * (v10 + v9++);
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v12) = *((_QWORD *)a4 - 1);
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v12 + 8) = a2;
    }
    while ( v9 < a3 );
  }
  if ( *((_DWORD *)this + 8) == 64 )
    *((_DWORD *)this + 8) = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) += a3;
  return 0LL;
}
