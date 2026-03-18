/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0023BA8
 * Callers:
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0019E50 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00CAB90 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01086D0 (--0DXGPRESENT@@QEAA@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(DXGPRESENT **this, struct _D3DKMT_PRESENT *a2, struct DXGPROCESS *a3)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  _QWORD *v8; // rax
  DXGPRESENT *v9; // rax
  _QWORD *v10; // rax

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
    v9 = this[19];
    if ( v9 )
      goto LABEL_11;
    v9 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    if ( v9 )
      v9 = DXGPRESENT::DXGPRESENT(v9, *((_DWORD *)this[2] + 424));
    this[19] = v9;
    if ( v9 )
    {
LABEL_11:
      *((_BYTE *)this + 402) = 1;
      return DXGPRESENT::CopyPresentArgs(v9, (struct DXGCONTEXT *)this, a2);
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdLowResource();
      v10[3] = -1073741801LL;
      v10[4] = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL);
      v10[5] = a3;
      v10[6] = this;
      WdLogEvent5_WdLowResource(v10);
      return 3221225495LL;
    }
  }
}
