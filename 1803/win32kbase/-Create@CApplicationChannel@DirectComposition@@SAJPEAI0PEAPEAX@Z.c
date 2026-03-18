/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0010F20
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C0010E00 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000A498 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000BC94 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0010D00 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C0011024 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0014CB8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  DirectComposition::CApplicationChannel *v7; // rax
  unsigned int *v8; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v10; // rax
  struct DirectComposition::CProcessData *v11; // rsi
  struct _ERESOURCE *v12; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v7 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x310uLL);
    if ( v7 )
      v8 = (unsigned int *)DirectComposition::CApplicationChannel::CApplicationChannel(v7, DefaultConnection, 1, *a2);
    else
      v8 = 0LL;
    if ( v8 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v8,
                   a2,
                   a3);
      if ( inserted < 0 )
        goto LABEL_13;
      v10 = DirectComposition::CProcessData::Current();
      v11 = v10;
      if ( v10 )
      {
        v12 = (struct _ERESOURCE *)*((_QWORD *)v10 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v12, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(_QWORD *)v11,
                     v8[7],
                     v8);
        ExReleaseResourceLite(*((PERESOURCE *)v11 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_13:
        DirectComposition::CChannel::Release((DirectComposition::CChannel *)v8);
      else
        *a1 = v8[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
