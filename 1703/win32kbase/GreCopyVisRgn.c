/*
 * XREFs of GreCopyVisRgn @ 0x1C0028A30
 * Callers:
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003E430 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0);
  if ( v5[0] )
  {
    if ( v6[0] )
    {
      v7 = *(_QWORD *)(v5[0] + 1536LL);
      if ( v7 )
      {
        if ( (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v6, (struct RGNOBJ *)&v7) )
          v3 = RGNOBJ::iComplexity((RGNOBJ *)v6);
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v5);
  return v3;
}
