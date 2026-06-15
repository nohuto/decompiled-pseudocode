/*
 * XREFs of ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D6C0
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAPOProcessNode::SetLeftFormat(CAPOProcessNode *this, struct IAudioMediaType *a2)
{
  CAudioMediaType *v4; // rcx
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  __int64 v6; // rcx
  void (*v7)(void); // rax

  v4 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v7 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v7();
  }
  if ( *((struct IAudioMediaType **)this + 1) != a2 )
  {
    if ( a2 )
    {
      AddRef = a2->lpVtbl->AddRef;
      if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
        _InterlockedIncrement((volatile signed __int32 *)&a2[1]);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(a2);
    }
    v6 = *((_QWORD *)this + 1);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 1) = a2;
  }
}
