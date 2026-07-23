/*
 * XREFs of RtlCopyContext @ 0x1800862F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D1AC @ 0x18006D1AC (sub_18006D1AC.c)
 *     sub_180086444 @ 0x180086444 (sub_180086444.c)
 *     sub_180086454 @ 0x180086454 (sub_180086454.c)
 *     sub_18008668C @ 0x18008668C (sub_18008668C.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  int v6; // ebx
  M128A *XmmRegisters; // rbp
  NTSTATUS result; // eax
  __int64 v9; // rdx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // esi
  ULONG v14; // esi
  __int64 v15; // rcx
  NTSTATUS v16; // edi
  int v17; // ecx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  XmmRegisters = 0LL;
  result = sub_18006D1AC(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    v19 = (_DWORD *)sub_180086444(Context, ContextFlags);
    v10 = (int *)sub_180086444(Source, v9);
    v12 = *v11;
    v13 = *v10;
    result = sub_18006D1AC(ContextFlags | *v10 | *v11, 0LL);
    if ( result >= 0 )
    {
      v14 = ContextFlags & v13;
      result = sub_18006D1AC(v14, &v18);
      if ( result >= 0 )
      {
        result = sub_18006D1AC(v12, &v20);
        v16 = result;
        if ( result >= 0 )
        {
          if ( (~v20 & v18) != 0 )
          {
            return -2147483643;
          }
          else
          {
            sub_180086454(v15, Context, v14, Source);
            *v19 |= v12;
            if ( (v20 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                XmmRegisters = (M128A *)((char *)&Source->1 + 460);
                v6 = (_DWORD)Context + 716;
                LOBYTE(v17) = (v12 & 0x10020) != 65568;
                if ( ((unsigned __int8)v17 & ((v14 & 0x10020) == 65568)) != 0 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (M128A *)&Source[1];
                v6 = (_DWORD)Context + 1232;
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = (_DWORD)Context + 416;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = (_DWORD)Context + 912;
              }
            }
            if ( (v18 & 2) == 0 )
              return v16;
            result = sub_18008668C(v17, v6, v6, (_DWORD)XmmRegisters, (__int64)XmmRegisters);
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
