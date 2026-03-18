/*
 * XREFs of ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0170720
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C8480 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01C86F8 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::QueryActiveContextCount(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // esi
  _QWORD *v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)this;
  if ( v4 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16));
  v5 = 3 * v3;
  v6 = *((_QWORD *)this + 2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, *(struct DXGFASTMUTEX *const *)(v6 + 8 * v5));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v7 = *((_DWORD *)this + 2);
  v8 = 0;
  v9 = *(_QWORD **)(v6 + 8 * v5 + 8);
  if ( v7 )
  {
    v10 = v7;
    do
    {
      v11 = v8 + 1;
      if ( *v9++ == 0LL )
        v11 = v8;
      v8 = v11;
      --v10;
    }
    while ( v10 );
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v8;
}
