/*
 * XREFs of ??$make_shared@VCPlaybackReference@@PEAVCPlaybackNotifier@@AEAPEBG@std@@YA?AV?$shared_ptr@VCPlaybackReference@@@0@$$QEAPEAVCPlaybackNotifier@@AEAPEBG@Z @ 0x18002AB30
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18000F638 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::make_shared<CPlaybackReference,CPlaybackNotifier *,unsigned short const * &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r8
  _QWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x88uLL);
  v8 = v7;
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CPlaybackReference>::`vftable';
    if ( v7 != (_DWORD *)-16LL )
    {
      v9 = *a3;
      *((_QWORD *)v7 + 16) = *a2;
      _o_wcscpy_s(v7 + 4, 56LL, v9);
    }
  }
  else
  {
    v8 = 0LL;
  }
  *a1 = v8 + 4;
  result = a1;
  a1[1] = v8;
  return result;
}
