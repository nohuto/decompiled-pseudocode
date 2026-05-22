/*
 * XREFs of ?AllocatePeer@ISMBamosBamoConnection@@MEAAJPEAPEAVISMBamosBamoPeer@@@Z @ 0x18001DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ISMBamosBamoConnection::AllocatePeer(ISMBamosBamoConnection *this, struct ISMBamosBamoPeer **a2)
{
  _DWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x48uLL);
  *(_QWORD *)v4 = &dataproviderBamoPeer::`vftable';
  v4[4] = 1;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  v4[12] = 0;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::ISMBamosBamoPeerImpl::`vftable';
  *a2 = (struct ISMBamosBamoPeer *)v4;
  return 0LL;
}
