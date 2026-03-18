/*
 * XREFs of GreCopyVisRgn @ 0x1C0059E40
 * Callers:
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0043420 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0055314 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, struct HOBJ__ *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v6, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 0);
  v4 = v6[0];
  if ( v6[0] )
  {
    if ( v7[0] )
    {
      v8 = *(_QWORD *)(v6[0] + 1536LL);
      if ( v8 )
      {
        if ( (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v7, (struct RGNOBJ *)&v8) )
          v3 = RGNOBJ::iComplexity((RGNOBJ *)v7);
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  if ( v4 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v6);
  return v3;
}
