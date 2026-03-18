/*
 * XREFs of NtDCompositionSetChannelCallbackId @ 0x1C008A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCallbackId(unsigned int a1, int a2, int a3)
{
  int v5; // ebx
  struct DirectComposition::CApplicationChannel *v6; // rcx
  __int64 v7; // rdx
  struct DirectComposition::CApplicationChannel *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v5 = 0;
    v7 = a2 != 0 ? 4 : 0;
    if ( a3 && *(_DWORD *)((char *)v9 + v7 + 684) )
    {
      v5 = -1073741790;
    }
    else
    {
      *(_DWORD *)((char *)v9 + v7 + 684) = a3;
      if ( a2 )
        *((_BYTE *)v6 + 256) |= 0x40u;
      else
        *((_BYTE *)v6 + 256) |= 0x20u;
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v6)(v6);
  }
  return (unsigned int)v5;
}
