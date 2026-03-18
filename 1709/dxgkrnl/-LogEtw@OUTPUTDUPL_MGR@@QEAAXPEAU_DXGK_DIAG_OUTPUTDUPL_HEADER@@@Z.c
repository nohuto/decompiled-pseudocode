/*
 * XREFs of ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C01C6F3C
 * Callers:
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01C7388 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 * Callees:
 *     McTemplateK0qqqq @ 0x1C00215BC (McTemplateK0qqqq.c)
 *     McTemplateK0qqq @ 0x1C002AC50 (McTemplateK0qqq.c)
 *     McTemplateK0qqqddt @ 0x1C002ACD0 (McTemplateK0qqqddt.c)
 *     McTemplateK0qqqiiqttddtqq @ 0x1C002AD90 (McTemplateK0qqqiiqttddtqq.c)
 *     McTemplateK0qqqqq @ 0x1C002AED8 (McTemplateK0qqqqq.c)
 *     McTemplateK0qqqqqqqDR6qDR8 @ 0x1C002AF80 (McTemplateK0qqqqqqqDR6qDR8.c)
 *     McTemplateK0qqqqqqqdd @ 0x1C002B08C (McTemplateK0qqqqqqqdd.c)
 *     McTemplateK0qqqqqqqddqq @ 0x1C002B17C (McTemplateK0qqqqqqqddqq.c)
 *     McTemplateK0qqqqqqqqqDR8 @ 0x1C002B294 (McTemplateK0qqqqqqqqqDR8.c)
 *     McTemplateK0qqqqqtqtq @ 0x1C002B398 (McTemplateK0qqqqqtqtq.c)
 */

void __fastcall OUTPUTDUPL_MGR::LogEtw(OUTPUTDUPL_MGR *this, struct _DXGK_DIAG_OUTPUTDUPL_HEADER *a2, const GUID *a3)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // edx
  unsigned int v15; // r9d
  char *v16; // [rsp+60h] [rbp-28h]

  v3 = *((unsigned int *)a2 + 12);
  if ( (int)v3 > 5 )
  {
    v8 = (unsigned int)(v3 - 6);
    if ( (_DWORD)v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      if ( (_DWORD)v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = (unsigned int)(v10 - 1);
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0qqqq(
                v11,
                &Dxgk_Diag_OutputDupl_Release_Frame,
                (__int64)a3,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                *((_DWORD *)a2 + 14));
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0qqqqqqqddqq(
              v11,
              (__int64)a2,
              (__int64)a3,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15),
              *((_DWORD *)a2 + 16),
              *((_DWORD *)a2 + 17),
              *((_DWORD *)a2 + 18),
              *((_DWORD *)a2 + 19),
              *((_DWORD *)a2 + 21),
              *((_DWORD *)a2 + 20));
          }
        }
        else
        {
          v12 = *((unsigned int *)a2 + 14);
          if ( (_DWORD)v12 )
          {
            v15 = *((_DWORD *)a2 + 16);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0qqqqqqqqqDR8(
                (__int64)a2 + 72,
                &Dxgk_Diag_OutputDupl_Get_Meta_Data_Move,
                v12,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                v12,
                *((_DWORD *)a2 + 15),
                v15,
                *((_DWORD *)a2 + 17),
                v15 / 0x18,
                6 * (v15 / 0x18),
                (__int64)a2 + 72);
          }
          else
          {
            v13 = *((unsigned int *)a2 + 16);
            v14 = *((_DWORD *)a2 + 16) >> 4;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0qqqqqqqqqDR8(
                (unsigned int)(4 * v14),
                &Dxgk_Diag_OutputDupl_Get_Meta_Data_Dirty,
                v13,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                0,
                *((_DWORD *)a2 + 15),
                v13,
                *((_DWORD *)a2 + 17),
                v14,
                4 * v14,
                (__int64)a2 + 72);
          }
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qqqiiqttddtqq(
          v9,
          (__int64)a2,
          (__int64)a3,
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13),
          *((_QWORD *)a2 + 7),
          *((_QWORD *)a2 + 8),
          *((_DWORD *)a2 + 18),
          *((_DWORD *)a2 + 19),
          *((_DWORD *)a2 + 20),
          *((_DWORD *)a2 + 21),
          *((_DWORD *)a2 + 22),
          *((_DWORD *)a2 + 23),
          *((_DWORD *)a2 + 24),
          *((_DWORD *)a2 + 25));
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qqqqqtqtq(
        v8,
        (__int64)a2,
        (__int64)a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15),
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        *((_DWORD *)a2 + 19));
    }
  }
  else if ( (_DWORD)v3 == 5 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqq(
        (PMCGEN_TRACE_CONTEXT)v3,
        (PCEVENT_DESCRIPTOR)a2,
        a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13));
  }
  else if ( (_DWORD)v3 )
  {
    v5 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = (unsigned int)(v6 - 1);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqqddt(
              v7,
              (__int64)a2,
              (__int64)a3,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15),
              *((_DWORD *)a2 + 16));
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0qqqqqqqdd(
            v7,
            (__int64)a2,
            (__int64)a3,
            *((_DWORD *)a2 + 10),
            *((_DWORD *)a2 + 11),
            *((_DWORD *)a2 + 13),
            *((_DWORD *)a2 + 14),
            *((_DWORD *)a2 + 15),
            *((_DWORD *)a2 + 16),
            *((_DWORD *)a2 + 17),
            *((_DWORD *)a2 + 18),
            *((_DWORD *)a2 + 19));
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v16 = (char *)a2 + 16 * *((unsigned int *)a2 + 15) + 72;
        McTemplateK0qqqqqqqDR6qDR8(
          (unsigned int)(4 * *((_DWORD *)a2 + 15)),
          (__int64)v16,
          (unsigned int)(6 * *((_DWORD *)a2 + 16)),
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13),
          *((_DWORD *)a2 + 14),
          *((_DWORD *)a2 + 15),
          *((_DWORD *)a2 + 16),
          4 * *((_DWORD *)a2 + 15),
          (__int64)a2 + 72,
          6 * *((_DWORD *)a2 + 16),
          (__int64)v16);
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qqqqq(
        v5,
        &Dxgk_Diag_OutputDupl_Destroy,
        (__int64)a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15));
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qqqqq(
      v3,
      &Dxgk_Diag_OutputDupl_Connect,
      (__int64)a3,
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      *((_DWORD *)a2 + 13),
      *((_DWORD *)a2 + 14),
      *((_DWORD *)a2 + 15));
  }
}
