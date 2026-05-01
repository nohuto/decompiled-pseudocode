/*
 * XREFs of ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18008F52C
 * Callers:
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008F0E4 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<ParsedPenWorkspaceLayout>::_Change_array(void **a1, char *a2, __int64 a3, __int64 a4)
{
  LPVOID *v4; // rbx
  LPVOID *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  void *v12; // r8
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char *result; // rax

  v4 = (LPVOID *)*a1;
  if ( *a1 )
  {
    v9 = (LPVOID *)a1[1];
    while ( v4 != v9 )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v4 + 4));
      if ( *v4 )
      {
        v10 = 0LL;
        if ( v4[1] )
        {
          do
          {
            v11 = *((_QWORD *)*v4 + v10);
            if ( v11 )
            {
              *((_QWORD *)*v4 + v10) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            ++v10;
          }
          while ( v10 < (unsigned __int64)v4[1] );
        }
        CoTaskMemFree(*v4);
        *v4 = 0LL;
      }
      v4[1] = 0LL;
      v4[3] = 0LL;
      v4 += 13;
    }
    v12 = *a1;
    v13 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    if ( (unsigned __int64)(v13 / 104) <= 0x276276276276276LL )
    {
      if ( (unsigned __int64)(104 * (v13 / 104)) < 0x1000 )
      {
LABEL_17:
        operator delete(v12);
        goto LABEL_18;
      }
      if ( ((unsigned __int8)v12 & 0x1F) == 0 )
      {
        v14 = *((_QWORD *)v12 - 1);
        if ( v14 < (unsigned __int64)v12 && (unsigned __int64)v12 - v14 - 8 <= 0x1F )
        {
          v12 = (void *)*((_QWORD *)v12 - 1);
          goto LABEL_17;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v13);
    JUMPOUT(0x18008F66ALL);
  }
LABEL_18:
  *a1 = a2;
  a1[1] = &a2[104 * a3];
  result = &a2[104 * a4];
  a1[2] = result;
  return result;
}
