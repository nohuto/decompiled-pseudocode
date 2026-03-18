/*
 * XREFs of ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E6964
 * Callers:
 *     NtDxgkVailConnect @ 0x1C01E8CF0 (NtDxgkVailConnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall EnableVmBusChannel(struct DXGVMBUSCHANNEL *a1)
{
  int v2; // edi
  __int64 v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (struct DXGVMBUSCHANNEL *)((char *)a1 + 96), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    if ( !*((_BYTE *)a1 + 24) )
    {
      v2 = VmbChannelEnable(v3);
      if ( v2 >= 0 )
      {
        if ( *((_BYTE *)a1 + 25) )
          VmbChannelStart(*((_QWORD *)a1 + 2));
        *((_BYTE *)a1 + 24) = 1;
      }
    }
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  return (unsigned int)v2;
}
