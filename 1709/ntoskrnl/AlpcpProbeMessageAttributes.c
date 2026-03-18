/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x140467B0C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, volatile void *a2, char a3)
{
  __int64 v4; // r9
  ULONG v5; // r11d
  __int64 v6; // rax
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  ULONG v12; // eax
  bool v13; // zf
  ULONG v14; // ecx
  unsigned int v15; // eax
  ULONG v17; // eax
  ULONG v18; // ecx

  v4 = 0x7FFFFFFF0000LL;
  v5 = 8;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a2;
  v7 = *(_DWORD *)v6;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    if ( v7 < 0 )
      v5 = 20;
    v17 = v5 + 16;
    if ( (v7 & 0x40000000) == 0 )
      v17 = v5;
    v5 = 4;
    v18 = v17 + 20;
    if ( (v7 & 0x20000000) == 0 )
      v18 = v17;
    v12 = v18 + 16;
    if ( (v7 & 0x10000000) == 0 )
      v12 = v18;
    v13 = (v7 & 0x8000000) == 0;
    v14 = v12 + 24;
  }
  else
  {
    v8 = 8;
    if ( v7 < 0 )
      v8 = 32;
    v9 = v8 + 32;
    if ( (v7 & 0x40000000) == 0 )
      v9 = v8;
    v10 = v9 + 32;
    if ( (v7 & 0x20000000) == 0 )
      v10 = v9;
    v11 = v10 + 24;
    if ( (v7 & 0x10000000) == 0 )
      v11 = v10;
    v12 = v11 + 24;
    if ( (v7 & 0x8000000) == 0 )
      v12 = v11;
    v13 = (v7 & 0x4000000) == 0;
    v14 = v12 + 8;
  }
  if ( v13 )
    v14 = v12;
  v15 = v14 + 8;
  if ( (v7 & 0x2000000) == 0 )
    v15 = v14;
  if ( a3 || (v7 & 0xA0000000) != 0 )
  {
    if ( v15 )
    {
      if ( ((v5 - 1) & (unsigned int)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v4 = (__int64)a2;
      *(_BYTE *)v4 = *(_BYTE *)v4;
      *(_BYTE *)(v4 + v15 - 1) = *(_BYTE *)(v4 + v15 - 1);
    }
    else
    {
      ProbeForWrite(a2, 0LL, v5);
    }
  }
  else if ( v15 && ((v5 - 1) & (unsigned int)a2) != 0 )
  {
    ExRaiseDatatypeMisalignment();
  }
  return (unsigned int)v7;
}
