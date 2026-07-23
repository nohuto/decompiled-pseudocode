/*
 * XREFs of RtlCopyContext @ 0x140727268
 * Callers:
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 *     PspSetContextState @ 0x14071D310 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14006A610 (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x1400DAC50 (RtlpCopyLegacyContext.c)
 *     RtlpGetContextFlagsLocation @ 0x1400DD9A0 (RtlpGetContextFlagsLocation.c)
 *     RtlpCopyXStateChunk @ 0x14012FFF0 (RtlpCopyXStateChunk.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  _M128A *v6; // rdi
  _M128A *XmmRegisters; // rbp
  NTSTATUS result; // eax
  int v9; // edx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // esi
  ULONG v14; // esi
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  int v17; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation((__int64)Context, ContextFlags);
    v10 = (int *)RtlpGetContextFlagsLocation((__int64)Source, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(ContextFlags | *v10 | *v11, 0LL);
    if ( result >= 0 )
    {
      v14 = ContextFlags & v13;
      result = RtlpValidateContextFlags(v14, &v17);
      if ( result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v19);
        v16 = result;
        if ( result >= 0 )
        {
          if ( (~v19 & v17) != 0 )
          {
            return -2147483643;
          }
          else
          {
            LOBYTE(v15) = 1;
            RtlpCopyLegacyContext(v15, (__int64)Context, v14);
            *ContextFlagsLocation |= v12;
            if ( (v19 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                XmmRegisters = (_M128A *)((char *)&Source->1 + 460);
                v6 = (_M128A *)((char *)&Context->1 + 460);
                if ( (v12 & 0x10020) != 65568 && (v14 & 0x10020) == 65568 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (_M128A *)&Source[1];
                v6 = (_M128A *)&Context[1];
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = Context->FltSave.XmmRegisters;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = &Context->VectorRegister[9];
              }
            }
            if ( (v17 & 2) == 0 )
              return v16;
            result = RtlpCopyXStateChunk(1, (__int64)v6, (__int64)v6, (__int64)XmmRegisters, (__int64)XmmRegisters);
            v16 = result;
            if ( result >= 0 )
              return v16;
          }
        }
      }
    }
  }
  return result;
}
