/*
 * XREFs of ??1?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x18002AD98
 * Callers:
 *     ??1Edges@@QEAA@XZ @ 0x180029FE4 (--1Edges@@QEAA@XZ.c)
 *     ??1CShellEdgyNotifier@@UEAA@XZ @ 0x18002BB40 (--1CShellEdgyNotifier@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Edge>::~vector<Edge>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) / 72;
    if ( v3 <= 0x38E38E38E38E38ELL )
    {
      if ( 72 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18002AE27LL);
  }
}
