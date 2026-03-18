/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0A34
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1480 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01F0260 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F0314 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F03EC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01F054C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01F0590 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F0F24 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0202140 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  struct tagINTDDEINFO *v8; // rdi
  __int64 v9; // rdx
  __int16 v10; // ax
  void *v11; // rdx
  __int64 v12; // r8
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // eax
  void *v18; // rax
  struct tagXSTATE *v19; // rax
  struct tagINTDDEINFO *v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  void *v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = 131;
  v6 = xxxCopyDdeIn(*a2, &v21, &v22, &v20);
  v8 = v20;
  v9 = gSharedInfo[1];
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + v9 + 25) & 1) != 0 )
  {
    v6 = 3;
    if ( !v20 )
      return v6;
    Win32FreePool(v20, v9, v7);
  }
  if ( v6 == 2 )
  {
    v10 = *((_WORD *)v8 + 36);
    if ( (v10 & 0xA000) == 0 )
      *((_WORD *)v8 + 36) = v10 | 0x2000;
    if ( (*((_WORD *)v8 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v8 + 6)) )
      {
        Win32FreePool(v8, v11, v12);
        return 3LL;
      }
      v14 = GiveObject(
              *((unsigned __int16 *)v8 + 37),
              v11,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 400LL) + 56LL));
      v15 = v21;
      if ( v14 )
        v15 = v21 | 0x4000;
      v16 = v15 | 0x400;
    }
    else
    {
      v17 = AddPublicObject(
              *((unsigned __int16 *)v8 + 37),
              *((void **)v8 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 400LL) + 56LL));
      v16 = v21;
      if ( v17 )
        v16 = v21 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v8 + 36) >= 0 )
    {
      xxxClientFreeDDEHandle(v22, v16 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
      {
        *a2 = 0LL;
        return 3;
      }
      v19 = Createpxs(0LL, 0LL, 0LL, v8, v16 | 0x200);
      if ( v19 )
      {
        *((_QWORD *)v19 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v18 = *(void **)v19;
      }
      else
      {
        v18 = 0LL;
      }
    }
    else
    {
      v18 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxAdviseDataAck, 0LL, v22, v8, v16);
    }
    *a2 = v18;
    if ( !v18 )
      return 3;
  }
  return v6;
}
