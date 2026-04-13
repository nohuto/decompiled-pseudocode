/*
 * XREFs of ??_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x1800255A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18001972C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAU-$IKeyV.c)
 */

HSTRING *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  WindowsDeleteString(this[22]);
  this[22] = 0LL;
  WindowsDeleteString(this[19]);
  this[19] = 0LL;
  WindowsDeleteString(this[18]);
  this[18] = 0LL;
  WindowsDeleteString(this[17]);
  this[17] = 0LL;
  WindowsDeleteString(this[16]);
  this[16] = 0LL;
  WindowsDeleteString(this[15]);
  this[15] = 0LL;
  WindowsDeleteString(this[14]);
  this[14] = 0LL;
  WindowsDeleteString(this[13]);
  this[13] = 0LL;
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  WindowsDeleteString(this[11]);
  this[11] = 0LL;
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
