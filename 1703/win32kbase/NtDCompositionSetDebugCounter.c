/*
 * XREFs of NtDCompositionSetDebugCounter @ 0x1C008E090
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetDebugCounter(unsigned int a1, int a2)
{
  int v3; // ebx
  struct DirectComposition::CApplicationChannel *v4; // rcx
  int v5; // edx
  int v6; // edx
  struct DirectComposition::CApplicationChannel *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
  if ( v3 >= 0 )
  {
    v4 = v8;
    v5 = *((_DWORD *)v8 + 154);
    if ( a2 )
    {
      if ( v5 )
      {
        if ( v5 == 3 )
          *((_DWORD *)v8 + 154) = 2;
      }
      else
      {
        *((_DWORD *)v8 + 154) = 1;
      }
    }
    else
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          *((_DWORD *)v8 + 154) = 3;
      }
      else
      {
        *((_DWORD *)v8 + 154) = 0;
      }
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
