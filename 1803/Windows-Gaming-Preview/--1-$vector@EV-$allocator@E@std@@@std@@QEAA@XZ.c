/*
 * XREFs of ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x180016CC8
 * Callers:
 *     _GetStringPropertyFromGameConfigStore_::_1_::dtor$0 @ 0x18004402D (_GetStringPropertyFromGameConfigStore_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<unsigned char>::~vector<unsigned char>(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v3 = *a1;
  if ( v3 )
  {
    if ( a1[2] - v3 >= 0x1000 )
    {
      if ( (v3 & 0x1F) != 0 || (v4 = *(_QWORD *)(v3 - 8), v4 >= v3) || (v3 = v3 - v4 - 8, v3 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v3, a2);
        JUMPOUT(0x180016D25LL);
      }
      v3 = v4;
    }
    operator delete((void *)v3);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
