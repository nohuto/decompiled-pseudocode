/*
 * XREFs of GreExtEscape @ 0x1C01012BC
 * Callers:
 *     NtGdiExtEscape @ 0x1C0036CF0 (NtGdiExtEscape.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C010C3BC (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, int a2, int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  DC *v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+4Ch] [rbp-34h]
  _BYTE v17[32]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+70h] [rbp-10h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v10 = 0;
  if ( v13[0] )
  {
    v10 = GreExtEscapeInternal((struct DCOBJ *)v13, a2, a3, a4, a5, a6);
  }
  else
  {
    v15 = 0;
    v14 = 0LL;
    v18 = 0;
    v16 = 1;
    v12 = PushThreadGuardedObject(v17, &v14, XFERDCOBJ::ThreadCleanup);
    v18 = v12;
    if ( v12 )
    {
      XDCOBJ::vLock(&v14, a1);
      v12 = v18;
    }
    if ( v14 )
    {
      v10 = GreExtEscapeInternal((struct DCOBJ *)&v14, a2, a3, a4, a5, a6);
      v12 = v18;
    }
    if ( v12 )
      PopThreadGuardedObject(v17);
    if ( v14 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v10;
}
