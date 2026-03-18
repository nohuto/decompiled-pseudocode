/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C006E400
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(LegacyInputDispatcher *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  v2 = *((unsigned int *)this + 8);
  if ( (_DWORD)v2 != 64 )
  {
    v3 = (unsigned int)(*((_DWORD *)this + 10) - v2);
    memset((void *)(*((_QWORD *)this + 1) + 8 * v2), 0, 8 * v3);
    memset(*((void **)this + 3), 0, 16 * v3);
    *((_DWORD *)this + 10) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 8) = 64;
  }
}
