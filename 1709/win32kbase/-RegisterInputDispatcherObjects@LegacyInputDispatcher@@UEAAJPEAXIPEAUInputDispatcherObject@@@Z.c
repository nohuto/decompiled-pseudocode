/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C003BD80
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
  int v4; // r11d
  int v7; // eax
  unsigned int v8; // r9d
  int v9; // r11d
  __int64 v10; // rax
  __int64 v11; // rdx

  v4 = *((_DWORD *)this + 13);
  if ( v4 + a3 > *((_DWORD *)this + 11) )
    return 3221225485LL;
  v7 = *((_DWORD *)this + 10);
  v8 = 0;
  v9 = v4 - v7;
  if ( v7 == 64 )
    v9 = 0;
  if ( a3 )
  {
    do
    {
      v10 = *(_QWORD *)a4;
      a4 = (struct InputDispatcherObject *)((char *)a4 + 24);
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (v8 + *((_DWORD *)this + 13))) = v10;
      v11 = 2LL * (v9 + v8++);
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v11) = *((_QWORD *)a4 - 1);
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v11 + 8) = a2;
    }
    while ( v8 < a3 );
  }
  if ( *((_DWORD *)this + 10) == 64 )
    *((_DWORD *)this + 10) = *((_DWORD *)this + 13);
  *((_DWORD *)this + 13) += a3;
  return 0LL;
}
