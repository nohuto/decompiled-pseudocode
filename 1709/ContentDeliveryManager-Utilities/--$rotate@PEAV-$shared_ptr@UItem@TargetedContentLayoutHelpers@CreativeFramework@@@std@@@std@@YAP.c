/*
 * XREFs of ??$rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x180091DC0
 * Callers:
 *     ??$_Buffered_rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@@Z @ 0x180091910 (--$_Buffered_rotate@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::rotate<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
        char *a1,
        char *a2,
        char *a3)
{
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  char *v10; // rdx
  char *v11; // rbx
  char *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rcx

  if ( a1 != a2 && a2 != a3 )
  {
    v5 = (a2 - a1) >> 4;
    v6 = (a3 - a1) >> 4;
    v7 = v5;
    v8 = (a3 - a1) >> 4;
    if ( v5 )
    {
      do
      {
        v9 = v8;
        v8 = v7;
        v7 = v9 % v7;
      }
      while ( v7 );
      if ( v8 < v6 && v8 > 0 )
      {
        v10 = &a1[16 * v8];
        do
        {
          v11 = &v10[16 * v5];
          v12 = v10;
          if ( v11 == a3 )
            v11 = a1;
          do
          {
            v13 = *((_QWORD *)v12 + 1);
            *((_QWORD *)v12 + 1) = *((_QWORD *)v11 + 1);
            *((_QWORD *)v11 + 1) = v13;
            v14 = *(_QWORD *)v12;
            *(_QWORD *)v12 = *(_QWORD *)v11;
            v12 = v11;
            *(_QWORD *)v11 = v14;
            v15 = &v11[16 * v5];
            v16 = (a3 - v11) >> 4;
            v11 = &a1[16 * (v5 - v16)];
            if ( v5 < v16 )
              v11 = v15;
          }
          while ( v11 != v10 );
          --v8;
          v10 -= 16;
        }
        while ( v8 > 0 );
      }
    }
  }
  return &a1[(a3 - a2) & 0xFFFFFFFFFFFFFFF0uLL];
}
