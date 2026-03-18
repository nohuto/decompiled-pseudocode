/*
 * XREFs of ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C01CEAB0
 * Callers:
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00AC0E4 (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C001DEB4 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C007F65C (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C007F81C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 */

void __fastcall BLTQUEUE::SetQueuedPresentLimit(struct _LIST_ENTRY *this, unsigned int a2)
{
  struct BLTENTRY *v4; // rdi
  char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi

  BLTQUEUE::Flush((BLTQUEUE *)this);
  v4 = (struct BLTENTRY *)&this[54];
  this[5].Blink = this + 5;
  this[5].Flink = this + 5;
  v5 = CCachedData<BLTENTRY,3>::Get((__int64)&this[54], a2);
  if ( v5 )
  {
    if ( a2 )
    {
      v6 = a2;
      do
      {
        BLTQUEUE::InsertQueueTail((BLTQUEUE *)this, this + 5, (struct BLTENTRY *)v5);
        v5 += 560;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v7 = 3LL;
    do
    {
      BLTQUEUE::InsertQueueTail((BLTQUEUE *)this, this + 5, v4);
      v4 = (struct BLTENTRY *)((char *)v4 + 560);
      --v7;
    }
    while ( v7 );
  }
}
