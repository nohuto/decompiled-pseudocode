/*
 * XREFs of ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01AC750
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB15C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB2AC (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01ABCE4 (-SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall UpdateTPContactState(unsigned int a1, struct tagTPSTATE *a2, struct tagPOINTERINFONODE *a3)
{
  int v3; // eax
  unsigned int v4; // r10d
  char *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax

  v3 = *((_DWORD *)a3 + 17);
  v4 = a1;
  v5 = (char *)a2 + 272 * a1;
  if ( v3 )
  {
    if ( (v3 & 0x40000) != 0 )
    {
      if ( *((_DWORD *)a2 + 416) == 2 && v4 == *((_DWORD *)a2 + 408) )
        *((_DWORD *)a2 + 480) &= ~0x2000000u;
      v6 = *((_DWORD *)v5 + 66);
      if ( (v6 & 0x10000) != 0 )
      {
        *((_DWORD *)v5 + 66) = v6 & 0xFFFEFFFF;
      }
      else
      {
        *((_DWORD *)v5 + 66) = v6 & 0xFFFFFFDE;
        SetContactRestingState((struct tagTPCONTACTSTATE *)v5, a2, 0);
        *(_DWORD *)(v7 + 264) &= 0xFFFFFAFF;
        *(_DWORD *)(v7 + 124) = 0;
      }
      v8 = *((_DWORD *)a2 + 416);
      if ( (v8 == 3 || v8 == 6) && v4 == *((_DWORD *)a2 + 409) )
        *((_DWORD *)a2 + 480) &= ~0x400u;
    }
    else
    {
      *((_QWORD *)v5 + 4) = *((_QWORD *)a3 + 11);
      *((_QWORD *)v5 + 8) = *((_QWORD *)a3 + 17);
      v9 = *((_DWORD *)a2 + 416);
      if ( v9 != 3 && v9 != 6 )
        *((_QWORD *)v5 + 1) = *((_QWORD *)a3 + 12);
    }
  }
}
