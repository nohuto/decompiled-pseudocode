/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C5084 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C5370 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GreAccNotifyWindow @ 0x1C008CC7C (GreAccNotifyWindow.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall SetRedirectionBitmap(void **a1, HBITMAP a2, int a3)
{
  unsigned int v4; // ebx
  __int64 *Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8

  v4 = 0;
  Prop = (__int64 *)GetProp((__int64)a1, atomLayer, 1);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (__int64 *)v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp(a1, (unsigned __int16)atomLayer, v10, 1LL) )
      {
        Win32FreePool(Prop, v11, v12);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v4;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    Prop[2] = 0LL;
    Prop[3] = 0LL;
    if ( (HBITMAP)*Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow((__int64)a2, *a1);
      *Prop = (__int64)a2;
    }
  }
  else if ( a3 )
  {
    v13 = InternalRemoveProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
    v14 = v13;
    if ( v13 )
    {
      v8 = *v13;
      DeleteMaybeSpecialRgn(v13[5]);
      Win32FreePool(v14, v15, v16);
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  else if ( Prop )
  {
    v8 = *Prop;
    *Prop = 0LL;
    Prop[2] = 0LL;
    Prop[3] = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
