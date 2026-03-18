/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C0120268
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 CCursorClip::Initialize(void)
{
  CCursorClip *v0; // rax
  CCursorClip *v1; // rbx

  v0 = (CCursorClip *)Win32AllocPoolZInit(0x40uLL, 0x72705443u);
  v1 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0x20uLL);
    *((_QWORD *)v1 + 6) = 0LL;
    *((_QWORD *)v1 + 7) = 0LL;
    *((_QWORD *)v1 + 4) = 0LL;
    *((_QWORD *)v1 + 5) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  gpCursorClip = v1;
  return v1 == 0LL ? 0xC0000017 : 0;
}
