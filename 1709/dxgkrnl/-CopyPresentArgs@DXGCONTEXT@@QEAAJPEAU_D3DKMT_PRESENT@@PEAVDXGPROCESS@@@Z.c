/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C001D59C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00BEAA0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00BEDDC (--0DXGPRESENT@@QEAA@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(DXGPRESENT **this, struct _D3DKMT_PRESENT *a2, struct DXGPROCESS *a3)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  _QWORD *v8; // rax
  DXGPRESENT *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax

  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_WORD *)&Value & 0x8000) != 0 )
  {
    if ( (*(_DWORD *)&Value & 0x400000) != 0 || a2->pPresentRegions )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
      v8[3] = -1073741811LL;
      v8[4] = this;
      v8[5] = a2->Flags.Value;
      v8[6] = a2->pPresentRegions;
      WdLogEvent5_WdError(v8);
      return 3221225485LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    if ( this[19] )
      return DXGPRESENT::CopyPresentArgs(this[19], (struct DXGCONTEXT *)this, a2);
    v9 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    if ( v9 )
      v9 = DXGPRESENT::DXGPRESENT(v9, *((_DWORD *)this[2] + 420));
    this[19] = v9;
    if ( v9 )
    {
      return DXGPRESENT::CopyPresentArgs(this[19], (struct DXGCONTEXT *)this, a2);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10);
      v11[3] = -1073741801LL;
      v11[4] = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL);
      v11[5] = a3;
      v11[6] = this;
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
  }
}
