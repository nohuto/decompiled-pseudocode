/*
 * XREFs of ??1?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA@XZ @ 0x18019DFF0
 * Callers:
 *     _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$13 @ 0x1801F62F9 (_TouchKeyboardExperienceManager--_TouchKeyboardExperienceManager_--_1_--dtor$13.c)
 * Callees:
 *     ?_Destroy@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@2@0@Z @ 0x18019E4AC (-_Destroy@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::~vector<std::shared_ptr<KBViewInfo>>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  if ( *a1 )
  {
    std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(a1, *a1, a1[1]);
    v2 = *a1;
    v3 = (__int64)(a1[2] - *a1) >> 4;
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
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18019E070LL);
  }
}
