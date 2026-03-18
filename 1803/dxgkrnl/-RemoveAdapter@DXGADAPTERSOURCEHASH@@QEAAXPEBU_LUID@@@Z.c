/*
 * XREFs of ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C01A09D0
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01528D0 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C01A8AB4 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

void __fastcall DXGADAPTERSOURCEHASH::RemoveAdapter(DXGADAPTERSOURCEHASH *this, const struct _LUID *a2)
{
  unsigned int ActualBufferSize; // eax
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v5 = (_DWORD *)*((_QWORD *)this + 5);
  v6 = ActualBufferSize >> 4;
  if ( v6 > 1 << *((_DWORD *)this + 15) )
    v6 = 1 << *((_DWORD *)this + 15);
  if ( v6 )
  {
    v7 = v6;
    do
    {
      if ( *v5 == a2->LowPart && v5[1] == a2->HighPart )
        v5[3] &= ~1u;
      v5 += 4;
      --v7;
    }
    while ( v7 );
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
