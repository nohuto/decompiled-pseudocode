/*
 * XREFs of ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01D7F38
 * Callers:
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01D8D68 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

struct tagCHECKPOINT *__fastcall GetOrUpdateCheckPointIfNotPresent(struct _MOVESIZEDATA *a1)
{
  struct tagCHECKPOINT *Prop; // r8
  __int64 v3; // r11
  struct tagCHECKPOINT *result; // rax
  int v5; // eax
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  Prop = (struct tagCHECKPOINT *)GetProp(*((_QWORD *)a1 + 2), atomCheckpointProp, 1);
  if ( Prop
    || (GetRect(v3, (int *)&v7, 66),
        result = (struct tagCHECKPOINT *)CkptRestore(*((_QWORD *)a1 + 2), &v7),
        (Prop = result) != 0LL) )
  {
    v5 = *((_DWORD *)a1 + 49);
    if ( (v5 & 0x1000000) == 0 )
    {
      v6 = *(_OWORD *)Prop;
      *((_DWORD *)a1 + 49) = v5 | 0x1000000;
      *(_OWORD *)((char *)a1 + 152) = v6;
    }
    return Prop;
  }
  return result;
}
