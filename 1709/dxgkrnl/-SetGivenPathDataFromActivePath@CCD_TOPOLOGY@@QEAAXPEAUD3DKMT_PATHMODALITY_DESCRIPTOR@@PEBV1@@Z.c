/*
 * XREFs of ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C01F7BF4
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::SetGivenPathDataFromActivePath(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct CCD_TOPOLOGY *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // edx
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax

  v3 = 0;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a3 + 8);
  if ( *(_WORD *)(v8 + 20) )
  {
    while ( 1 )
    {
      v9 = 264LL * v3;
      if ( *((_DWORD *)a2 + 4) == *(_DWORD *)(v9 + v8 + 64)
        && *((_DWORD *)a2 + 5) == *(_DWORD *)(v9 + v8 + 68)
        && *((_DWORD *)a2 + 6) == *(_DWORD *)(v9 + v8 + 72)
        && *((_DWORD *)a2 + 7) == *(_DWORD *)(v9 + v8 + 76) )
      {
        break;
      }
      if ( ++v3 >= *(unsigned __int16 *)(v8 + 20) )
        return;
    }
    if ( ((*(_QWORD *)a2 & 2) == 0
       || *((_DWORD *)a2 + 13) == *(_DWORD *)(v9 + v8 + 100) && *((_DWORD *)a2 + 14) == *(_DWORD *)(v9 + v8 + 104))
      && ((*(_BYTE *)(v9 + v8 + 48) & 4) == 0 || *(_DWORD *)(v9 + v8 + 128) == 1) )
    {
      v10 = *(unsigned int *)(v9 + v8 + 144);
      if ( (unsigned int)v10 <= *(_DWORD *)(v9 + v8 + 92) )
      {
        v11 = *(_DWORD *)(v9 + v8 + 148);
        if ( v11 <= *(_DWORD *)(v9 + v8 + 96) && *(_DWORD *)(v9 + v8 + 180) == 1 )
        {
          if ( ((*((_DWORD *)a2 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)v10 < *((_DWORD *)a2 + 38) )
              return;
            v12 = v11 < *((_DWORD *)a2 + 39);
          }
          else
          {
            if ( (unsigned int)v10 < *((_DWORD *)a2 + 39) )
              return;
            v12 = v11 < *((_DWORD *)a2 + 38);
          }
          if ( !v12 )
          {
            if ( (*(_QWORD *)a2 & 0x100LL) != 0 )
            {
              v13 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v13 + 24) = 1096LL;
              WdLogEvent5_WdAssertion(v13);
            }
            if ( (*(_BYTE *)a2 & 1) != 0 )
            {
              v14 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v14 + 24) = 1097LL;
              WdLogEvent5_WdAssertion(v14);
            }
            if ( (*((_DWORD *)a2 + 2) & 0x100LL) != 0 )
            {
              v15 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v15 + 24) = 1098LL;
              WdLogEvent5_WdAssertion(v15);
            }
            if ( (*((_BYTE *)a2 + 8) & 1) != 0 )
            {
              v16 = WdLogNewEntry5_WdAssertion(v10);
              *(_QWORD *)(v16 + 24) = 1099LL;
              WdLogEvent5_WdAssertion(v16);
            }
            v17 = *(_QWORD *)a2;
            *((_OWORD *)a2 + 6) = *(_OWORD *)(v9 + v8 + 144);
            *((_OWORD *)a2 + 7) = *(_OWORD *)(v9 + v8 + 160);
            *((_DWORD *)a2 + 11) = *(_DWORD *)(v9 + v8 + 92);
            v18 = *(_DWORD *)(v9 + v8 + 96);
            *((_QWORD *)a2 + 1) |= 0x101uLL;
            *((_DWORD *)a2 + 12) = v18;
            v17 |= 0x10000000000101uLL;
            *(_QWORD *)a2 = v17;
            *(_QWORD *)a2 = v17 | *(_DWORD *)(v9 + v8 + 48) & 0x400;
          }
        }
      }
    }
  }
}
