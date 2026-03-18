/*
 * XREFs of ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C0196914
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0170654 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00A648C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

void __fastcall DXGADAPTERSOURCEHASH::RemoveAdapter(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int ActualBufferSize; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  unsigned int v11; // eax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v9 = (unsigned int)(1 << *((_DWORD *)this + 15));
  v10 = (_DWORD *)*((_QWORD *)this + 5);
  v11 = ActualBufferSize >> 4;
  if ( v11 > (unsigned int)v9 )
    v11 = 1 << *((_DWORD *)this + 15);
  if ( v11 )
  {
    v9 = v11;
    do
    {
      if ( *v10 == a2->LowPart && v10[1] == a2->HighPart )
        v10[3] &= ~1u;
      v10 += 4;
      --v9;
    }
    while ( v9 );
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v9, v7, v8);
}
