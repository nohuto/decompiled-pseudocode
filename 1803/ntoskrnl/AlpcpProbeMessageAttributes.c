/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x1404DA04C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, volatile void *a2, char a3)
{
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  ULONG v9; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx

  v5 = 0x7FFFFFFF0000LL;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a2;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)v6 & 0x80000000;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    v9 = 4;
    v19 = v8 != 0 ? 20 : 8;
    v20 = v8 != 0 ? 36 : 24;
    if ( (v7 & 0x40000000) == 0 )
      v20 = v19;
    v21 = v20 + 20;
    if ( (v7 & 0x20000000) == 0 )
      v21 = v20;
    v14 = v21 + 16;
    if ( (v7 & 0x10000000) == 0 )
      v14 = v21;
    v15 = (v7 & 0x8000000) == 0;
    v16 = v14 + 24;
  }
  else
  {
    v9 = 8;
    v10 = v8 != 0 ? 32 : 8;
    v11 = v8 != 0 ? 64 : 40;
    if ( (v7 & 0x40000000) == 0 )
      v11 = v10;
    v12 = v11 + 32;
    if ( (v7 & 0x20000000) == 0 )
      v12 = v11;
    v13 = v12 + 24;
    if ( (v7 & 0x10000000) == 0 )
      v13 = v12;
    v14 = v13 + 24;
    if ( (v7 & 0x8000000) == 0 )
      v14 = v13;
    v15 = (v7 & 0x4000000) == 0;
    v16 = v14 + 8;
  }
  if ( v15 )
    v16 = v14;
  v17 = v16 + 8;
  if ( (v7 & 0x2000000) == 0 )
    v17 = v16;
  if ( a3 || (v7 & 0xA0000000) != 0 )
  {
    if ( (_DWORD)v17 )
    {
      if ( ((v9 - 1) & (unsigned int)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v5 = (__int64)a2;
      *(_BYTE *)v5 = *(_BYTE *)v5;
      *(_BYTE *)(v5 + (unsigned int)v17 - 1) = *(_BYTE *)(v5 + (unsigned int)v17 - 1);
    }
    else
    {
      ProbeForWrite(a2, 0LL, v9);
    }
  }
  else if ( v17 && ((v9 - 1) & (unsigned int)a2) != 0 )
  {
    ExRaiseDatatypeMisalignment();
  }
  return v7;
}
