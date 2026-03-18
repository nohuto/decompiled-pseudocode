/*
 * XREFs of ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C008E468
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C008E3D0 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0013D40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C0018B5C (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C001CC40 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C001E818 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C001E850 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::Create(unsigned int *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *v3; // rax
  unsigned int v4; // edx
  int *v5; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v7; // rax
  struct DirectComposition::CProcessData *v8; // r14
  struct _ERESOURCE *v9; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v3 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x330uLL, 0x63644344u);
    v5 = (int *)v3;
    if ( v3 )
    {
      DirectComposition::CApplicationChannel::CApplicationChannel(v3, DefaultConnection, 1, 0);
      *(_QWORD *)v5 = &DirectComposition::CDwmChannel::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v5,
                   0LL,
                   0LL);
      if ( inserted < 0 )
        goto LABEL_16;
      v7 = DirectComposition::CProcessData::Current();
      v8 = v7;
      if ( v7 )
      {
        v9 = (struct _ERESOURCE *)*((_QWORD *)v7 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v9, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(struct _RTL_GENERIC_TABLE **)v8,
                     v5[7],
                     (__int64)v5);
        ExReleaseResourceLite(*((PERESOURCE *)v8 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_16:
        (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      else
        *a1 = v5[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection, v4);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
