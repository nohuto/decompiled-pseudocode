/*
 * XREFs of ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0147640
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C0142F00 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000A498 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000BC94 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C0011024 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0014CB8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::Create(unsigned int *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  int inserted; // ebx
  DirectComposition::CApplicationChannel *v4; // rax
  unsigned int v5; // edx
  int *v6; // rdi
  struct DirectComposition::CProcessData *v7; // rax
  struct DirectComposition::CProcessData *v8; // r14
  struct _ERESOURCE *v9; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
  if ( DefaultConnection )
  {
    v4 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x310uLL, 0x63644344u);
    v6 = (int *)v4;
    if ( v4 )
    {
      DirectComposition::CApplicationChannel::CApplicationChannel(v4, DefaultConnection, 1, 0);
      *(_QWORD *)v6 = &DirectComposition::CDwmChannel::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v6,
                   0LL,
                   0LL);
      if ( inserted < 0 )
        goto LABEL_14;
      v7 = DirectComposition::CProcessData::Current();
      v8 = v7;
      if ( v7 )
      {
        v9 = (struct _ERESOURCE *)*((_QWORD *)v7 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v9, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(struct _RTL_GENERIC_TABLE **)v8,
                     v6[7],
                     (__int64)v6);
        ExReleaseResourceLite(*((PERESOURCE *)v8 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_14:
        (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      else
        *a1 = v6[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
