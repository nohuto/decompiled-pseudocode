/*
 * XREFs of ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C001BFA0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B2E0 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B3B4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C001DD64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     Template_qqqq @ 0x1C01412D0 (Template_qqqq.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateResource(
        DirectComposition::CConnection **this,
        unsigned int a2,
        char a3,
        char a4)
{
  int InternalSharedResource; // eax
  int inserted; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  struct DirectComposition::CResourceMarshaler *v14[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( a4 )
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalSharedResource(
                               this,
                               a3,
                               (PVOID *)v14);
  else
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalResource(
                               (DirectComposition::CApplicationChannel *)this,
                               a3,
                               v14);
  inserted = InternalSharedResource;
  if ( InternalSharedResource >= 0 )
  {
    v9 = v14[0];
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CLinearObjectTableBase *)(this + 7),
                 v14[0],
                 a2);
    if ( inserted < 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v9);
    }
    else if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) != 0 )
    {
      Template_qqqq(v11, v10, v12, *((_DWORD *)this + 7), *((_DWORD *)v9 + 6), a2, a3);
    }
  }
  return (unsigned int)inserted;
}
