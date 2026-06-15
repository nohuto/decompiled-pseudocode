/*
 * XREFs of ??$make_shared@VCSebReference@@QEAVCSebNotifier@@@std@@YA?AV?$shared_ptr@VCSebReference@@@0@$$QEBQEAVCSebNotifier@@@Z @ 0x180026FD8
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180026EC4 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::make_shared<CSebReference,CSebNotifier * const>(_QWORD *a1, _QWORD *a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<CSebReference>::`vftable';
    if ( v5 != (_DWORD *)-16LL )
      *((_QWORD *)v5 + 2) = *a2;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
