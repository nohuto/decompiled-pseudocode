/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x140472940
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404730E0 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  unsigned int v6; // ebx
  ULONG v7; // r8d
  __int64 v8; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v3 = a2;
  v5 = a2;
  if ( a2 >= 0x7FFFFFFF0000LL )
    v3 = 0x7FFFFFFF0000LL;
  v6 = *(_DWORD *)v3;
  v7 = 8;
  v8 = 8LL;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    if ( (v6 & 0x80000000) != 0 )
      v8 = 20LL;
    if ( (v6 & 0x40000000) != 0 )
      v8 = (unsigned int)(v8 + 16);
    if ( (v6 & 0x20000000) != 0 )
      v8 = (unsigned int)(v8 + 20);
    if ( (v6 & 0x10000000) != 0 )
      v8 = (unsigned int)(v8 + 16);
    if ( (v6 & 0x8000000) != 0 )
      v8 = (unsigned int)(v8 + 24);
    if ( (v6 & 0x2000000) != 0 )
      v8 = (unsigned int)(v8 + 8);
    v7 = 4;
  }
  else
  {
    if ( (v6 & 0x80000000) != 0 )
      v8 = 32LL;
    if ( (v6 & 0x40000000) != 0 )
      v8 = (unsigned int)(v8 + 32);
    if ( (v6 & 0x20000000) != 0 )
      v8 = (unsigned int)(v8 + 32);
    if ( (v6 & 0x10000000) != 0 )
      v8 = (unsigned int)(v8 + 24);
    if ( (v6 & 0x8000000) != 0 )
      v8 = (unsigned int)(v8 + 24);
    if ( (v6 & 0x4000000) != 0 )
      v8 = (unsigned int)(v8 + 8);
    if ( (v6 & 0x2000000) != 0 )
      v8 = (unsigned int)(v8 + 8);
  }
  if ( a3 || (v6 & 0xA0000000) != 0 )
  {
    if ( (unsigned __int64)(v8 - 1) > 0xFFE )
    {
      ProbeForWrite((volatile void *)a2, (unsigned int)v8, v7);
    }
    else
    {
      if ( ((v7 - 1) & (unsigned int)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v5 = *(_BYTE *)v5;
      *(_BYTE *)(v5 + (unsigned int)v8 - 1) = *(_BYTE *)(v5 + (unsigned int)v8 - 1);
    }
  }
  else if ( (_DWORD)v8 )
  {
    v10 = v7 - 1;
    if ( (unsigned int)v8 >= 0x10000uLL )
    {
      if ( (v10 & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a2 + v8;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else if ( (v10 & a2) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  return v6;
}
