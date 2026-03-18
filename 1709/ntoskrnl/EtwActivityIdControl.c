/*
 * XREFs of EtwActivityIdControl @ 0x14010EE00
 * Callers:
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x14014A2C0 (IoSetActivityIdIrp.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 *     VrpIoctlDeviceDispatch @ 0x1406A33F0 (VrpIoctlDeviceDispatch.c)
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x1406A6A5C (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x1406A6E08 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x1406A6EA8 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1406A7B04 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x1406A7F54 (VrpPreQueryKeyName.c)
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406BA268 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rax
  GUID *Teb; // r9
  unsigned __int64 v6; // rax
  GUID *v7; // r9
  ULONG v8; // ecx
  ULONG v9; // ecx
  volatile signed __int64 *v10; // rax
  __int16 v11; // dx
  GUID v12; // xmm1
  NTSTATUS v13; // [rsp+0h] [rbp-28h]
  GUID *v14; // [rsp+8h] [rbp-20h]

  v13 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v13;
  }
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    Teb = (GUID *)KeGetCurrentThread()->Teb;
    if ( Teb )
    {
      v14 = Teb + 369;
      v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v6 && ((v11 = *(_WORD *)(v6 + 8), v11 == 332) || v11 == 452) )
      {
        v7 = Teb + 757;
        v14 = v7;
      }
      else
      {
        v7 = Teb + 369;
      }
      if ( ControlCode == 1 )
      {
        *ActivityId = *v7;
      }
      else
      {
        v8 = ControlCode - 2;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            if ( v9 == 1 )
            {
              *ActivityId = *v7;
              v10 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
              *(_QWORD *)v14->Data4 = _InterlockedIncrement64(v10 + 1);
              *(_QWORD *)&v14->Data1 = *v10;
            }
            else
            {
              return -1073741811;
            }
          }
          else
          {
            v12 = *v7;
            *v7 = *ActivityId;
            *ActivityId = v12;
          }
        }
        else
        {
          *v7 = *ActivityId;
        }
      }
      return v13;
    }
  }
  return -1073741637;
}
