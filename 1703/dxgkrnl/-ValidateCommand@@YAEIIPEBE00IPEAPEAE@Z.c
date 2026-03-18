/*
 * XREFs of ?ValidateCommand@@YAEIIPEBE00IPEAPEAE@Z @ 0x1C002B03C
 * Callers:
 *     ?VmBusCddGdiCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B5A0 (-VmBusCddGdiCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ValidateCommand(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        unsigned __int8 *a4,
        const unsigned __int8 *a5,
        unsigned int a6,
        unsigned __int8 **a7)
{
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  unsigned __int8 *v9; // rax
  const unsigned __int8 *v10; // rcx

  v7 = 16LL * a6;
  if ( v7 <= 0xFFFFFFFF )
  {
    if ( (int)v7 + (int)a1 >= (unsigned int)a1 )
    {
      if ( (int)v7 + (int)a1 <= (unsigned int)a2 )
      {
        if ( *a7 > a5 )
        {
          v9 = (unsigned __int8 *)&a3[*a7 - a5];
          v10 = &a4[(unsigned int)(v7 + a1)];
          *a7 = v9;
          if ( v9 > a4 && v9 < v10 )
          {
            v10 -= (__int64)v9;
            if ( (__int64)v10 >= (unsigned int)v7 )
              return 1;
          }
          v8 = WdLogNewEntry5_WdAssertion(v10, a7, a3, a4);
          *(_QWORD *)(v8 + 24) = 5236LL;
        }
        else
        {
          v8 = WdLogNewEntry5_WdAssertion(a1, a7, a3, a4);
          *(_QWORD *)(v8 + 24) = 5229LL;
        }
      }
      else
      {
        v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v8 + 24) = 5224LL;
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v8 + 24) = 5219LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 5213LL;
  }
  WdLogEvent5_WdAssertion(v8);
  return 0;
}
