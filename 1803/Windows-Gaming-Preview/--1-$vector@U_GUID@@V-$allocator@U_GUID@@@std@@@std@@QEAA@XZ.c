/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180016D28
 * Callers:
 *     _DoWorkOnGameConfigStore_::_1_::dtor$1 @ 0x180043FDC (_DoWorkOnGameConfigStore_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<_GUID>::~vector<_GUID>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) >> 4;
    if ( v3 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v3 < 0x1000 )
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
    _o__invalid_parameter_noinfo_noreturn(v2, 0xFFFFFFFFFFFFFFFLL);
    JUMPOUT(0x180016D9CLL);
  }
}
