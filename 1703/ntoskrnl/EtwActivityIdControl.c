/*
 * XREFs of EtwActivityIdControl @ 0x140024570
 * Callers:
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x1401535C0 (IoSetActivityIdIrp.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x14067C12C (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x14067C4D8 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x14067C574 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x14067D0F8 (VrpPreQueryKeyName.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14068E59C (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rcx
  GUID *Teb; // rax
  unsigned __int64 v7; // rax
  GUID *v8; // rax
  ULONG v9; // ebx
  __int16 v10; // dx
  __int16 v11; // dx
  ULONG v12; // ebx
  ULONG v13; // ebx
  volatile signed __int64 *v14; // rdx
  GUID v15; // xmm1
  NTSTATUS v16; // [rsp+20h] [rbp-28h]
  GUID *v17; // [rsp+28h] [rbp-20h]
  GUID *v18; // [rsp+60h] [rbp+18h]

  v16 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v16;
  }
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
    Teb = 0LL;
  else
    Teb = (GUID *)KeGetCurrentThread()->Teb;
  v18 = Teb;
  if ( Teb )
  {
    v17 = Teb + 369;
    v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v7
      && ((v10 = *(_WORD *)(v7 + 8), v10 == 332) || v10 == 452)
      && ((v11 = *(_WORD *)(v7 + 8), v11 == 332) || v11 == 452) )
    {
      v8 = v18 + 757;
      v17 = v18 + 757;
    }
    else
    {
      v8 = v17;
    }
    v9 = ControlCode - 1;
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( v12 )
      {
        v13 = v12 - 2;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            *ActivityId = *v8;
            v14 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
            *(_QWORD *)v17->Data4 = _InterlockedIncrement64(v14 + 1);
            *(_QWORD *)&v17->Data1 = *v14;
          }
          else
          {
            return -1073741811;
          }
        }
        else
        {
          v15 = *v8;
          *v8 = *ActivityId;
          *ActivityId = v15;
        }
      }
      else
      {
        *v8 = *ActivityId;
      }
    }
    else
    {
      *ActivityId = *v8;
    }
    return v16;
  }
  return -1073741637;
}
